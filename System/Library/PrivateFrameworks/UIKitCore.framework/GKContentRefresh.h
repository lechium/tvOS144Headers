/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GKContentRefresh <NSObject>
@optional
-(void)_gkSetContentsNeedUpdateWithHandler:(/*^block*/id)arg1;
-(void)_gkForceNextContentUpdate;

@required
-(BOOL)_gkShouldRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2;
-(void)_gkRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2;
-(void)_gkResetContents;
-(void)_gkUpdateContentsWithCompletionHandlerAndError:(/*^block*/id)arg1;

@end

