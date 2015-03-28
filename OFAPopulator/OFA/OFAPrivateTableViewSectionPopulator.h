//
//  OFATableViewSectionPopulator.h
//  OFAPopulator
//
//  Created by Manuel Meyer on 02.03.15.
//  Copyright (c) 2015 com.vs. All rights reserved.
//

#import "OFAAbstractPrivateSectionPopulator.h"

@interface OFAPrivateTableViewSectionPopulator : OFAAbstractPrivateSectionPopulator


@property (nonatomic, weak, readonly) UIView *parentView;
@property (nonatomic, copy) void (^cellConfigurator)(id, UITableViewCell *, NSIndexPath *);
@property (nonatomic, copy) CGFloat (^heightForCellAtIndexPath)(id obj, NSIndexPath *indexPath);

- (instancetype)initWithParentView:(UITableView *)parentView
                      dataProvider:(id<OFADataProvider>)dataProvider
                    cellIdentifier:(NSString * (^)(id obj, NSIndexPath *indexPath))cellIdentifier
                  cellConfigurator:(void (^)(id, UITableViewCell *, NSIndexPath *))cellConfigurator;

@end
