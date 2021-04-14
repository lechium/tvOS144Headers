/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <Intents/INCodableObjectAttribute.h>

@class NSString, INCodableDescription;

@interface INCodableCustomObjectAttribute : INCodableObjectAttribute {

	NSString* _objectTypeName;
	NSString* _objectTypeNamespace;
	INCodableDescription* _codableDescription;

}

@property (nonatomic,copy) NSString * objectTypeName;                                       //@synthesize objectTypeName=_objectTypeName - In the implementation block
@property (nonatomic,copy) NSString * objectTypeNamespace;                                  //@synthesize objectTypeNamespace=_objectTypeNamespace - In the implementation block
@property (assign,nonatomic,__weak) INCodableDescription * codableDescription;              //@synthesize codableDescription=_codableDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)objectClass;
-(long long)valueType;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(Class)resolutionResultClass;
-(id)valueTransformer;
-(INCodableDescription *)codableDescription;
-(Class)_unsafeObjectClass;
-(NSString *)objectTypeName;
-(void)setObjectTypeName:(NSString *)arg1 ;
-(NSString *)objectTypeNamespace;
-(void)setObjectTypeNamespace:(NSString *)arg1 ;
-(void)setCodableDescription:(INCodableDescription *)arg1 ;
-(id)__INCodableDescriptionObjectTypeKey;
-(id)__INCodableDescriptionObjectTypeNamespaceKey;
-(id)__INTypeCodableDescriptionObjectTypeKey;
-(id)__INIntentResponseCodableDescriptionObjectTypeNamespaceKey;
-(id)__INTypeCodableDescriptionObjectTypeNamespaceKey;
-(id)__INIntentResponseCodableDescriptionObjectTypeKey;
@end

