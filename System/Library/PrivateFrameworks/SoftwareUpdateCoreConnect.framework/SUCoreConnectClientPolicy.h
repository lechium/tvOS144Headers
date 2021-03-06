/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreConnect.framework/SoftwareUpdateCoreConnect
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SUCoreConnectPolicyProtocolPrivate.h>
#import <libobjc.A.dylib/SUCoreConnectPolicyProtocol.h>

@protocol SUCoreConnectClientDelegate;
@class NSString;

@interface SUCoreConnectClientPolicy : NSObject <SUCoreConnectPolicyProtocolPrivate, SUCoreConnectPolicyProtocol> {

	NSString* _serviceName;
	id<SUCoreConnectClientDelegate> _clientDelegate;
	NSString* _clientID;

}

@property (nonatomic,retain,readonly) NSString * serviceName;                                      //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,__weak,readonly) id<SUCoreConnectClientDelegate> clientDelegate;              //@synthesize clientDelegate=_clientDelegate - In the implementation block
@property (nonatomic,retain,readonly) NSString * clientID;                                         //@synthesize clientID=_clientID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_getSharedClientAccessQueue;
+(id)_getSharedClientWhitelistedClasses;
+(id)_getWhitelistedClassesForKey:(id)arg1 ;
+(void)setWhitelistedClasses:(id)arg1 forKey:(id)arg2 ;
+(id)getWhitelistedClassesForKey:(id)arg1 ;
+(void)setWhitelistedClass:(Class)arg1 forKey:(id)arg2 ;
+(void)clearWhitelistedClasses;
-(NSString *)serviceName;
-(NSString *)clientID;
-(id<SUCoreConnectClientDelegate>)clientDelegate;
-(id)initForServiceName:(id)arg1 delegate:(id)arg2 clientID:(id)arg3 ;
-(id)initForServiceName:(id)arg1 delegate:(id)arg2 ;
@end

