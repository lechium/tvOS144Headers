/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPRequestResponseControllerDelegate <NSObject>
@optional
-(void)controller:(id)arg1 defersResponseReplacement:(/*^block*/id)arg2;
-(BOOL)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
-(void)didFinishLoadingRequestForController:(id)arg1;
-(void)willBeginLoadingRequestForController:(id)arg1;

@end

