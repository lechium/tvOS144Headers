//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TVHCatalogueViewController, TVHKMediaEntity;

@protocol TVHCatalogueViewControllerDelegate <NSObject>

@optional
- (void)catalogViewController:(TVHCatalogueViewController *)arg1 didPlayMediaEntity:(TVHKMediaEntity *)arg2;
- (void)catalogViewController:(TVHCatalogueViewController *)arg1 didLongPressMediaEntity:(TVHKMediaEntity *)arg2;
- (void)catalogViewController:(TVHCatalogueViewController *)arg1 didSelectMediaEntity:(TVHKMediaEntity *)arg2;
@end
