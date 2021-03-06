/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, IDSBaseMessage, NSArray;


@protocol FTMessageDeliveryProtocol <NSObject>
@property (nonatomic,copy) NSString * userAgent; 
@property (readonly) BOOL hasQueuedItems; 
@property (readonly) BOOL busy; 
@property (assign) BOOL retryInAirplaneMode; 
@property (assign) BOOL logToRegistration; 
@property (readonly) IDSBaseMessage * currentMessage; 
@property (readonly) NSArray * queuedMessages; 
@property (readonly) NSArray * allMessages; 
@property (readonly) long long maxMessageSize; 
@property (readonly) long long maxLargeMessageSize; 
@property (assign) unsigned long long maxConcurrentMessages; 
@optional
-(void)invalidate;
-(void)cancelMessage:(id)arg1;
-(void)setUserAgent:(id)arg1;
-(BOOL)sendMessage:(id)arg1;
-(NSString *)userAgent;
-(void)networkStateChanged;
-(NSArray *)queuedMessages;
-(BOOL)logToRegistration;
-(long long)maxMessageSize;
-(IDSBaseMessage *)currentMessage;
-(NSArray *)allMessages;
-(BOOL)busy;
-(BOOL)hasQueuedItems;
-(long long)maxLargeMessageSize;
-(void)setLogToRegistration:(BOOL)arg1;
-(unsigned long long)maxConcurrentMessages;
-(void)setMaxConcurrentMessages:(unsigned long long)arg1;
-(BOOL)retryInAirplaneMode;
-(void)setRetryInAirplaneMode:(BOOL)arg1;

@end

