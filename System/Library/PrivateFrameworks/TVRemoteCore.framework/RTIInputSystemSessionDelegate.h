/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RTIInputSystemSessionDelegate <NSObject>
@optional
-(void)inputSessionDidBegin:(id)arg1;
-(void)inputSessionDidEnd:(id)arg1;
-(void)inputSessionDidDie:(id)arg1;
-(void)inputSession:(id)arg1 documentTraitsDidChange:(id)arg2;
-(void)inputSession:(id)arg1 documentStateDidChange:(id)arg2;
-(void)inputSession:(id)arg1 didChangePause:(BOOL)arg2 withReason:(id)arg3;

@end

