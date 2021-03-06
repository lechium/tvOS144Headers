/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserManagement/UserManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSArray, NSDate;

@interface UMUserPersonaAttributes : NSObject <NSCopying> {

	BOOL _isEnterprisePersona;
	BOOL _isPersonalPersona;
	BOOL _isUniversalPersona;
	BOOL _isSystemPersona;
	BOOL _isDefaultPersona;
	BOOL _isGuestPersona;
	BOOL _isDataSeparatedPersona;
	BOOL _isDisabled;
	unsigned _userPersona_id;
	NSString* _userPersonaUniqueString;
	unsigned long long _userPersonaType;
	NSURL* _personaLayoutPathURL;
	NSArray* _userPersonaBundleIDList;
	NSString* _userPersonaDisplayName;
	NSDate* _creationDate;
	NSDate* _lastLoginDate;
	NSDate* _lastDisableDate;
	NSDate* _lastEnableDate;

}

@property (nonatomic,copy) NSURL * personaLayoutPathURL;                      //@synthesize personaLayoutPathURL=_personaLayoutPathURL - In the implementation block
@property (nonatomic,copy) NSString * userPersonaUniqueString;                //@synthesize userPersonaUniqueString=_userPersonaUniqueString - In the implementation block
@property (assign,nonatomic) unsigned long long userPersonaType;              //@synthesize userPersonaType=_userPersonaType - In the implementation block
@property (assign,nonatomic) unsigned userPersona_id;                         //@synthesize userPersona_id=_userPersona_id - In the implementation block
@property (assign,nonatomic) BOOL isEnterprisePersona;                        //@synthesize isEnterprisePersona=_isEnterprisePersona - In the implementation block
@property (assign,nonatomic) BOOL isPersonalPersona;                          //@synthesize isPersonalPersona=_isPersonalPersona - In the implementation block
@property (assign,nonatomic) BOOL isUniversalPersona;                         //@synthesize isUniversalPersona=_isUniversalPersona - In the implementation block
@property (assign,nonatomic) BOOL isSystemPersona;                            //@synthesize isSystemPersona=_isSystemPersona - In the implementation block
@property (assign,nonatomic) BOOL isDefaultPersona;                           //@synthesize isDefaultPersona=_isDefaultPersona - In the implementation block
@property (assign,nonatomic) BOOL isGuestPersona;                             //@synthesize isGuestPersona=_isGuestPersona - In the implementation block
@property (assign,nonatomic) BOOL isDataSeparatedPersona;                     //@synthesize isDataSeparatedPersona=_isDataSeparatedPersona - In the implementation block
@property (assign,nonatomic) BOOL isDisabled;                                 //@synthesize isDisabled=_isDisabled - In the implementation block
@property (nonatomic,copy) NSString * userPersonaDisplayName;                 //@synthesize userPersonaDisplayName=_userPersonaDisplayName - In the implementation block
@property (nonatomic,copy) NSArray * userPersonaBundleIDList;                 //@synthesize userPersonaBundleIDList=_userPersonaBundleIDList - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                             //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSDate * lastLoginDate;                            //@synthesize lastLoginDate=_lastLoginDate - In the implementation block
@property (nonatomic,copy) NSDate * lastDisableDate;                          //@synthesize lastDisableDate=_lastDisableDate - In the implementation block
@property (nonatomic,copy) NSDate * lastEnableDate;                           //@synthesize lastEnableDate=_lastEnableDate - In the implementation block
+(id)personaAttributesForPersonaUniqueString:(id)arg1 ;
+(id)personaAttributesForPersonaType:(unsigned long long)arg1 ;
+(id)setUpPersonaAttributesWithDictionary:(id)arg1 ;
+(id)personaAttributes;
+(id)personaAttributesForIdentifier:(id)arg1 ;
+(id)currentContextIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSDate *)creationDate;
-(BOOL)isEnterprisePersona;
-(BOOL)isGuestPersona;
-(unsigned long long)userPersonaType;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)userPersonaUniqueString;
-(BOOL)isPersonalPersona;
-(BOOL)isDisabled;
-(void)setIsDisabled:(BOOL)arg1 ;
-(void)setLastLoginDate:(NSDate *)arg1 ;
-(void)setPersonaLayoutPathURL:(NSURL *)arg1 ;
-(void)setUserPersonaUniqueString:(NSString *)arg1 ;
-(void)setUserPersona_id:(unsigned)arg1 ;
-(void)setUserPersonaType:(unsigned long long)arg1 ;
-(void)setIsPersonalPersona:(BOOL)arg1 ;
-(void)setIsEnterprisePersona:(BOOL)arg1 ;
-(void)setIsUniversalPersona:(BOOL)arg1 ;
-(void)setIsSystemPersona:(BOOL)arg1 ;
-(void)setIsDefaultPersona:(BOOL)arg1 ;
-(void)setIsGuestPersona:(BOOL)arg1 ;
-(void)setIsDataSeparatedPersona:(BOOL)arg1 ;
-(void)setUserPersonaDisplayName:(NSString *)arg1 ;
-(void)setUserPersonaBundleIDList:(NSArray *)arg1 ;
-(void)setLastEnableDate:(NSDate *)arg1 ;
-(void)setLastDisableDate:(NSDate *)arg1 ;
-(NSURL *)personaLayoutPathURL;
-(unsigned)userPersona_id;
-(BOOL)isUniversalPersona;
-(BOOL)isSystemPersona;
-(BOOL)isDefaultPersona;
-(BOOL)isDataSeparatedPersona;
-(NSArray *)userPersonaBundleIDList;
-(NSDate *)lastLoginDate;
-(NSDate *)lastDisableDate;
-(NSDate *)lastEnableDate;
-(void)setPropertiesFromUserPersona:(id)arg1 ;
-(NSString *)userPersonaDisplayName;
@end

