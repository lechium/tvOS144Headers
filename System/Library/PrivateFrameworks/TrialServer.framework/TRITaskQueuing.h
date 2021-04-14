/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TRITaskQueuing <TRITaskQueueControlling>
@required
-(unsigned long long)count;
-(BOOL)cancelTask:(id)arg1;
-(BOOL)addTask:(id)arg1 options:(id)arg2;
-(BOOL)resumeWithXPCActivityDescriptor:(id)arg1 executeWhenSuspended:(/*^block*/id)arg2;

@end
