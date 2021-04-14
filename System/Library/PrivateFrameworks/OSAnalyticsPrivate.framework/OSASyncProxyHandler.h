/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OSASyncProxyHandler <NSObject>
@property (readonly) NSObject*<OS_dispatch_queue> initializationQueue; 
@optional
-(void)handleConnection:(BOOL)arg1;
-(NSObject*<OS_dispatch_queue>)initializationQueue;

@required
-(void)handleFile:(id)arg1 metadata:(id)arg2;
-(void)ack:(id)arg1 result:(BOOL)arg2 error:(id)arg3;
-(void)handleMessage:(id)arg1 from:(id)arg2;

@end

