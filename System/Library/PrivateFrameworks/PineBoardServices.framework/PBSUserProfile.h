/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface PBSUserProfile : NSObject <BSDescriptionProviding, NSMutableCopying, NSSecureCoding, NSCopying> {

	NSString* _iCloudAltDSID;
	NSString* _iTunesAltDSID;
	NSString* _gameCenterAltDSID;
	NSUUID* _homeUserIdentifier;
	BOOL _selected;
	NSString* _overrideName;
	NSString* _identifier;
	long long _type;
	NSString* _personaUniqueString;

}

@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * iCloudAltDSID;                     //@synthesize iCloudAltDSID=_iCloudAltDSID - In the implementation block
@property (nonatomic,readonly) NSString * iTunesAltDSID;                     //@synthesize iTunesAltDSID=_iTunesAltDSID - In the implementation block
@property (nonatomic,readonly) NSString * gameCenterAltDSID;                 //@synthesize gameCenterAltDSID=_gameCenterAltDSID - In the implementation block
@property (nonatomic,readonly) NSString * personaUniqueString;               //@synthesize personaUniqueString=_personaUniqueString - In the implementation block
@property (nonatomic,readonly) NSUUID * homeUserIdentifier;                  //@synthesize homeUserIdentifier=_homeUserIdentifier - In the implementation block
@property (getter=isSelected,nonatomic,readonly) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) NSString * overrideName;                      //@synthesize overrideName=_overrideName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSString *)identifier;
-(NSString *)personaUniqueString;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(BOOL)isSelected;
-(NSString *)gameCenterAltDSID;
-(NSString *)iTunesAltDSID;
-(NSUUID *)homeUserIdentifier;
-(NSString *)iCloudAltDSID;
-(NSString *)overrideName;
-(id)initWithIdentifier:(id)arg1 type:(long long)arg2 iCloudAltDSID:(id)arg3 iTunesAltDSID:(id)arg4 gameCenterAltDSID:(id)arg5 personaUniqueString:(id)arg6 homeUserIdentifier:(id)arg7 selected:(BOOL)arg8 overrideName:(id)arg9 ;
-(id)_initWithUserProfile:(id)arg1 ;
@end

