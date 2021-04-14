/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FAFamilyCircleRequestConnectionProvider.h>

@protocol FAFamilyCircleRequestConnectionFactory;
@class NSXPCConnection, NSLock, NSString;

@interface _FAFamilyCircleRequestConnectionProvider : NSObject <FAFamilyCircleRequestConnectionProvider> {

	id<FAFamilyCircleRequestConnectionFactory> _factory;
	NSXPCConnection* _connection;
	NSLock* _lock;

}

@property (nonatomic,retain) id<FAFamilyCircleRequestConnectionFactory> factory;              //@synthesize factory=_factory - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSLock * lock;                                                 //@synthesize lock=_lock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)createResumedConnectionWithFactory:(id)arg1 provider:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSLock *)lock;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id<FAFamilyCircleRequestConnectionFactory>)factory;
-(id)serviceConnection;
-(void)connectionWasInterrupted:(id)arg1 ;
-(void)setFactory:(id<FAFamilyCircleRequestConnectionFactory>)arg1 ;
-(void)connectionWasInvalidated:(id)arg1 ;
-(id)initWithConnectionFactory:(id)arg1 ;
@end

