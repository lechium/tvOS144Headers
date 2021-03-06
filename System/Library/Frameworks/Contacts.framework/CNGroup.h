/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSData;

@interface CNGroup : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _name;
	int _iOSLegacyIdentifier;
	CNGroup* _snapshot;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	NSString* _externalIdentifier;
	NSData* _externalRepresentation;
	NSString* _externalModificationTag;
	NSString* _externalUUID;

}

@property (nonatomic,copy,readonly) NSString * externalURI; 
@property (nonatomic,copy,readonly) NSString * externalIdentifier;                   //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * externalRepresentation;                 //@synthesize externalRepresentation=_externalRepresentation - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalModificationTag;              //@synthesize externalModificationTag=_externalModificationTag - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalUUID;                         //@synthesize externalUUID=_externalUUID - In the implementation block
@property (nonatomic,copy,readonly) CNGroup * snapshot; 
@property (nonatomic,readonly) int iOSLegacyIdentifier;                              //@synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * creationDate;                           //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * modificationDate;                       //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)makeIdentifier;
+(id)identifierProvider;
+(id)makeIdentifierString;
+(id)predicateForiOSLegacyIdentifier:(int)arg1 ;
+(id)localizedStringForKey:(id)arg1 ;
+(id)predicateForGroupsWithIdentifiers:(id)arg1 ;
+(id)predicateForGroupsInContainerWithIdentifier:(id)arg1 ;
+(id)predicateForSubgroupsInGroupWithIdentifier:(id)arg1 ;
+(id)predicateForGroupsWithNameMatching:(id)arg1 ;
+(id)predicateForGroupWithNameMatching:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSString *)identifier;
-(NSDate *)creationDate;
-(NSDate *)modificationDate;
-(CNGroup *)snapshot;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 ;
-(NSString *)externalURI;
-(NSString *)externalModificationTag;
-(int)iOSLegacyIdentifier;
-(NSString *)externalIdentifier;
-(id)initWithGroup:(id)arg1 ;
-(NSData *)externalRepresentation;
-(NSString *)externalUUID;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 creationDate:(id)arg3 modificationDate:(id)arg4 iOSLegacyIdentifier:(int)arg5 ;
@end

