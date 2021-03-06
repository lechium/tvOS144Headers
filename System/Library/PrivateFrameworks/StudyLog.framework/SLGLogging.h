/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SLGLogging <NSObject>
@required
-(BOOL)isEnabled;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 completion:(/*^block*/id)arg3;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 tags:(/*^block*/id)arg3;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 tags:(/*^block*/id)arg3 completion:(/*^block*/id)arg4;

@end

