//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSWorkspaceSceneRequestOptions, FBWorkspace;

@protocol FBWorkspaceDelegate <NSObject>
- (void)workspace:(FBWorkspace *)arg1 didReceiveSceneRequestWithOptions:(FBSWorkspaceSceneRequestOptions *)arg2 completion:(void (^)(FBScene *, NSError *))arg3;
@end

