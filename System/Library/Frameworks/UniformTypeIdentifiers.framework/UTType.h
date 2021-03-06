/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/UniformTypeIdentifiers.framework/UniformTypeIdentifiers
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UniformTypeIdentifiers/UniformTypeIdentifiers-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UTTypeRecord, NSSet, NSDictionary, NSString, NSOrderedSet, NSNumber, NSURL;

@interface UTType : NSObject <NSCopying, NSSecureCoding> {

	UTTypeRecord* _typeRecord;

}

@property (readonly) NSSet * supertypes; 
@property (readonly) NSDictionary * tags; 
@property (readonly) long long _constantIndex; 
@property (getter=_isRealized,readonly) BOOL _realized; 
@property (readonly) UTTypeRecord * _typeRecord;                                  //@synthesize typeRecord=_typeRecord - In the implementation block
@property (readonly) NSDictionary * _localizedDescriptionDictionary; 
@property (readonly) NSString * _kindString; 
@property (readonly) NSDictionary * _kindStringDictionary; 
@property (readonly) NSOrderedSet * _parentTypes; 
@property (readonly) NSSet * _childTypes; 
@property (readonly) NSSet * _subtypes; 
@property (getter=_isExported,readonly) BOOL _exported; 
@property (getter=_isImported,readonly) BOOL _imported; 
@property (getter=_isWildcard,readonly) BOOL _wildcard; 
@property (getter=_isCoreType,readonly) BOOL _coreType; 
@property (readonly) NSString * identifier; 
@property (readonly) NSString * preferredFilenameExtension; 
@property (readonly) NSString * preferredMIMEType; 
@property (readonly) NSString * localizedDescription; 
@property (readonly) NSNumber * version; 
@property (readonly) NSURL * referenceURL; 
@property (getter=isDynamic,readonly) BOOL dynamic; 
@property (getter=isDeclared,readonly) BOOL declared; 
@property (getter=isPublicType,readonly) BOOL publicType; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)typeWithFilenameExtension:(id)arg1 ;
+(id)typeWithIdentifier:(id)arg1 ;
+(id)_typeWithDeviceModelCode:(id)arg1 enclosureColor:(UTHardwareColor)arg2 ;
+(id)_typeWithDeviceModelCode:(id)arg1 ;
+(id)_typeForURLPropertyProviderWithTypeRecord:(id)arg1 ;
+(id)_constantTypeForURLPropertyProviderWithIdentifier:(id)arg1 ;
+(id)_typeOfCurrentDevice;
+(id)typeWithTag:(id)arg1 tagClass:(id)arg2 conformingToType:(id)arg3 ;
+(id)typesWithTag:(id)arg1 tagClass:(id)arg2 conformingToType:(id)arg3 ;
+(id)_typeWithTypeRecord:(id)arg1 detachTypeRecord:(BOOL)arg2 findConstant:(BOOL)arg3 ;
+(id)typeWithFilenameExtension:(id)arg1 conformingToType:(id)arg2 ;
+(id)typeWithMIMEType:(id)arg1 ;
+(id)typeWithMIMEType:(id)arg1 conformingToType:(id)arg2 ;
+(void)_enumerateAllDeclaredTypesUsingBlock:(/*^block*/id)arg1 ;
+(id)_typesWithIdentifiers:(id)arg1 ;
+(id)_typeOfItemAtFileURL:(id)arg1 error:(id*)arg2 ;
+(id)_typeOfPromiseAtFileURL:(id)arg1 error:(id*)arg2 ;
+(void)_unrealizeAllCoreTypes;
+(id)exportedTypeWithIdentifier:(id)arg1 ;
+(id)exportedTypeWithIdentifier:(id)arg1 conformingToType:(id)arg2 ;
+(id)importedTypeWithIdentifier:(id)arg1 ;
+(id)importedTypeWithIdentifier:(id)arg1 conformingToType:(id)arg2 ;
+(id)_exportedTypeWithIdentifier:(id)arg1 bundle:(id)arg2 conformingToType:(id)arg3 ;
+(id)_importedTypeWithIdentifier:(id)arg1 bundle:(id)arg2 conformingToType:(id)arg3 ;
+(id)_typeWithIdentifier:(id)arg1 constantIndex:(long long)arg2 error:(id*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSNumber *)version;
-(NSDictionary *)tags;
-(NSSet *)_subtypes;
-(BOOL)isDynamic;
-(BOOL)conformsToType:(id)arg1 ;
-(NSURL *)referenceURL;
-(BOOL)_shouldURLPropertyProviderEncodeTypeRecord;
-(UTTypeRecord *)_typeRecord;
-(BOOL)isDeclared;
-(BOOL)_getEnclosureColor:(UTHardwareColor*)arg1 ;
-(NSString *)preferredFilenameExtension;
-(BOOL)isPublicType;
-(id)_localizedDescriptionWithPreferredLocalizations:(id)arg1 ;
-(NSDictionary *)_localizedDescriptionDictionary;
-(NSOrderedSet *)_parentTypes;
-(NSSet *)_childTypes;
-(BOOL)_isExported;
-(BOOL)_isImported;
-(BOOL)_isWildcard;
-(BOOL)_isCoreType;
-(id)_preferredTagOfClass:(id)arg1 ;
-(NSSet *)supertypes;
-(BOOL)_isRealized;
-(id)_initWithTypeRecord:(id)arg1 ;
-(void)_unrealize;
-(long long)_constantIndex;
-(NSString *)preferredMIMEType;
-(NSString *)_kindString;
-(id)_kindStringWithPreferredLocalizations:(id)arg1 ;
-(NSDictionary *)_kindStringDictionary;
-(BOOL)isSubtypeOfType:(id)arg1 ;
-(BOOL)isSupertypeOfType:(id)arg1 ;
@end

