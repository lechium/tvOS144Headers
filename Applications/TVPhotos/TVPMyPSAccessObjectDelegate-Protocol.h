//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, TVPMyPSAccessObject;

@protocol TVPMyPSAccessObjectDelegate <NSObject>
- (void)finishedCheckingChangesForMyPSAccessObject:(TVPMyPSAccessObject *)arg1 photoStreamAssets:(NSArray *)arg2;
- (void)assetsDidChangeForMyPSAccessObject:(TVPMyPSAccessObject *)arg1;
@end

