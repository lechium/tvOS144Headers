/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class NSString, INCodableAttribute, INCodableDescription, INCodableLocalizationTable;

@interface INCodableAttributeMetadata : NSObject <NSSecureCoding, INCodableCoding> {

	NSString* _name;
	NSString* _placeholder;
	NSString* _placeholderID;
	INCodableAttribute* _codableAttribute;

}

@property (nonatomic,__weak,readonly) INCodableAttribute * codableAttribute;                      //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (nonatomic,__weak,readonly) INCodableDescription * _codableDescription; 
@property (nonatomic,copy,readonly) INCodableLocalizationTable * _localizationTable; 
@property (nonatomic,copy,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                                                //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy) NSString * placeholderID;                                              //@synthesize placeholderID=_placeholderID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedPlaceholder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)placeholder;
-(INCodableLocalizationTable *)_localizationTable;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(INCodableDescription *)_codableDescription;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INCodableAttribute *)codableAttribute;
-(id)_localizedDialogTokensWithLocalizer:(id)arg1 ;
-(id)initWithName:(id)arg1 codableAttribute:(id)arg2 ;
-(NSString *)localizedPlaceholder;
-(id)localizedPlaceholderWithLocalizer:(id)arg1 ;
-(NSString *)placeholderID;
-(void)setPlaceholderID:(NSString *)arg1 ;
-(id)__INCodableDescriptionPlaceholderIDKey;
-(id)__INCodableDescriptionPlaceholderKey;
-(id)__INIntentResponseCodableDescriptionPlaceholderKey;
-(id)__INTypeCodableDescriptionPlaceholderKey;
-(id)__INIntentResponseCodableDescriptionPlaceholderIDKey;
-(id)__INTypeCodableDescriptionPlaceholderIDKey;
@end

