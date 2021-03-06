/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSSet, NSData;

@interface INAppInfo : NSObject <NSSecureCoding> {

	BOOL _supportsMultiwindow;
	NSString* _applicationIdentifier;
	NSArray* _counterpartIdentifiers;
	NSString* _developmentRegion;
	NSSet* _supportedActions;
	NSSet* _supportedIntents;
	NSSet* _supportedIntentsByApp;
	NSSet* _supportedActionsByExtensions;
	NSSet* _actionsRestrictedWhileLocked;
	NSSet* _actionsRestrictedWhileProtectedDataUnavailable;
	NSSet* _supportedMediaCategories;
	NSSet* _definedIntents;
	NSString* _companionApplicationIdentifier;

}

@property (nonatomic,copy) NSString * applicationIdentifier;                                    //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * companionApplicationIdentifier;                           //@synthesize companionApplicationIdentifier=_companionApplicationIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * counterpartIdentifiers;                                    //@synthesize counterpartIdentifiers=_counterpartIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * developmentRegion;                                        //@synthesize developmentRegion=_developmentRegion - In the implementation block
@property (nonatomic,copy) NSSet * supportedActions;                                            //@synthesize supportedActions=_supportedActions - In the implementation block
@property (nonatomic,copy) NSSet * supportedIntents;                                            //@synthesize supportedIntents=_supportedIntents - In the implementation block
@property (nonatomic,copy) NSSet * supportedIntentsByApp;                                       //@synthesize supportedIntentsByApp=_supportedIntentsByApp - In the implementation block
@property (nonatomic,copy) NSSet * supportedActionsByExtensions;                                //@synthesize supportedActionsByExtensions=_supportedActionsByExtensions - In the implementation block
@property (nonatomic,copy) NSSet * actionsRestrictedWhileLocked;                                //@synthesize actionsRestrictedWhileLocked=_actionsRestrictedWhileLocked - In the implementation block
@property (nonatomic,copy) NSSet * actionsRestrictedWhileProtectedDataUnavailable;              //@synthesize actionsRestrictedWhileProtectedDataUnavailable=_actionsRestrictedWhileProtectedDataUnavailable - In the implementation block
@property (nonatomic,copy) NSSet * supportedMediaCategories;                                    //@synthesize supportedMediaCategories=_supportedMediaCategories - In the implementation block
@property (nonatomic,copy) NSSet * definedIntents;                                              //@synthesize definedIntents=_definedIntents - In the implementation block
@property (assign,nonatomic) BOOL supportsMultiwindow;                                          //@synthesize supportsMultiwindow=_supportsMultiwindow - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
+(BOOL)supportsSecureCoding;
+(id)appInfoWithAppProxy:(id)arg1 ;
+(id)appInfoWithApplicationRecord:(id)arg1 ;
+(id)appInfoWithData:(id)arg1 error:(id*)arg2 ;
+(id)appInfoWithIntent:(id)arg1 ;
+(id)_appInfoWithApplicationRecord:(id)arg1 applicationExtensionRecords:(id)arg2 userActivityTypes:(id)arg3 ;
-(id)init;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)supportsMultiwindow;
-(NSString *)applicationIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)companionApplicationIdentifier;
-(NSArray *)counterpartIdentifiers;
-(void)setCounterpartIdentifiers:(NSArray *)arg1 ;
-(NSString *)developmentRegion;
-(void)setDevelopmentRegion:(NSString *)arg1 ;
-(void)setSupportsMultiwindow:(BOOL)arg1 ;
-(NSSet *)supportedActions;
-(void)setSupportedActions:(NSSet *)arg1 ;
-(NSSet *)supportedIntents;
-(void)setSupportedIntents:(NSSet *)arg1 ;
-(NSSet *)supportedIntentsByApp;
-(void)setSupportedIntentsByApp:(NSSet *)arg1 ;
-(NSSet *)supportedActionsByExtensions;
-(void)setSupportedActionsByExtensions:(NSSet *)arg1 ;
-(NSSet *)actionsRestrictedWhileLocked;
-(void)setActionsRestrictedWhileLocked:(NSSet *)arg1 ;
-(NSSet *)actionsRestrictedWhileProtectedDataUnavailable;
-(void)setActionsRestrictedWhileProtectedDataUnavailable:(NSSet *)arg1 ;
-(NSSet *)supportedMediaCategories;
-(void)setSupportedMediaCategories:(NSSet *)arg1 ;
-(NSSet *)definedIntents;
-(void)setDefinedIntents:(NSSet *)arg1 ;
-(void)setCompanionApplicationIdentifier:(NSString *)arg1 ;
@end

