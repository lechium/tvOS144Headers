/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreConnect.framework/SoftwareUpdateCoreConnect
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SUCoreConnectClientProxyProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface SUCoreConnectClientProxy : NSObject <NSSecureCoding, SUCoreConnectClientProxyProtocol> {

	NSString* _clientID;
	NSObject*<OS_dispatch_queue> _completionQueue;
	/*^block*/id _progressBlock;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,readonly) id progressBlock;                                                 //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,retain,readonly) NSString * clientID;                                       //@synthesize clientID=_clientID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(NSString *)clientID;
-(id)summary;
-(id)progressBlock;
-(void)executeProgressBlock:(id)arg1 ;
-(id)initWithClientID:(id)arg1 completionQueue:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
@end

