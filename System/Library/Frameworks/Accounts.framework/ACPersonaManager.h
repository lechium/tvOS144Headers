/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/UMUserPersonaUpdateObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSSet, NSArray, ACAccountStore;

@interface ACPersonaManager : NSObject <UMUserPersonaUpdateObserver> {

	NSObject*<OS_dispatch_queue> _backgroundPersonaUpdate;
	BOOL _registered;
	NSString* _enterprisePersonaUID;
	NSString* _personalPersonaUID;
	NSSet* _guestPersonasUID;
	NSArray* _dataSeparatedPersonasUIDs;
	ACAccountStore* _store;

}

@property (nonatomic,copy,readonly) NSString * enterprisePersonaUID; 
@property (nonatomic,copy,readonly) NSString * personalPersonaUID; 
@property (nonatomic,copy,readonly) NSSet * guestPersonasUIDs; 
@property (nonatomic,copy,readonly) NSArray * dataSeparatedPersonasUIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)performWithinPersonaForAccount:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(BOOL)performWithinPersona:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(void)_changePersonaContextUsingPersonaID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)performWithinPersonaForAccountIdentifier:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)init;
-(id)store;
-(NSString *)enterprisePersonaUID;
-(void)updatePersonasUIDs;
-(NSSet *)guestPersonasUIDs;
-(void)_registerForPersonaListUpdateWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)personalPersonaUID;
-(void)personaListDidUpdate;
-(NSArray *)dataSeparatedPersonasUIDs;
@end

