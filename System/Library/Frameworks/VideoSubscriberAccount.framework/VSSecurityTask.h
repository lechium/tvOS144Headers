/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
@class NSString;

@interface VSSecurityTask : NSObject {

	unsigned long long _kind;
	SCD_Struct_VS3 _auditToken;
	/*function pointer*/void* _createWithAuditToken;
	/*function pointer*/void* _createFromSelf;
	/*function pointer*/void* _copyValueForEntitlement;
	/*function pointer*/void* _copySigningIdentifier;
	SecTaskRef _taskRef;

}

@property (nonatomic,copy,readonly) NSString * signingIdentifier; 
+(id)currentSecurityTask;
+(id)securityTaskForCurrentConnection;
+(id)securityTaskWithAuditToken:(SCD_Struct_VS3)arg1 ;
+(void)setSecurityTaskForCurrentConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)signingIdentifier;
-(BOOL)shouldAllowAccessForBooleanEntitlement:(id)arg1 ;
-(BOOL)getValue:(id*)arg1 forEntitlement:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldAllowAccessToSubscriberIdentifierHashModifier:(id)arg1 ;
-(id)initWithCreateFromSelfProc:(/*function pointer*/void*)arg1 copyValueForEntitlementProc:(/*function pointer*/void*)arg2 ;
-(id)initWithAuditToken:(SCD_Struct_VS3)arg1 createWithAuditTokenProc:(/*function pointer*/void*)arg2 copyValueForEntitlementProc:(/*function pointer*/void*)arg3 ;
-(SecTaskRef)_taskRef;
-(/*function pointer*/void*)_copySigningIdentifier;
@end

