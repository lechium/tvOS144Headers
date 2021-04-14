/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INRuntimeObject.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/INSpeakable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSMutableDictionary, INImage;

@interface INObject : NSObject <INRuntimeObject, INJSONSerializable, INSpeakable, NSCopying, NSSecureCoding> {

	NSMutableDictionary* _valueForKeyDictionary;
	NSString* _identifier;
	NSString* _displayString;
	NSString* _pronunciationHint;
	NSString* _subtitleString;
	INImage* _displayImage;
	NSArray* _alternativeSpeakableMatches;

}

@property (nonatomic,readonly) NSMutableDictionary * _valueForKeyDictionary;              //@synthesize valueForKeyDictionary=_valueForKeyDictionary - In the implementation block
@property (nonatomic,copy) NSString * descriptionString; 
@property (nonatomic,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayString;                             //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,readonly) NSString * pronunciationHint;                              //@synthesize pronunciationHint=_pronunciationHint - In the implementation block
@property (nonatomic,copy) NSString * subtitleString;                                     //@synthesize subtitleString=_subtitleString - In the implementation block
@property (nonatomic,retain) INImage * displayImage;                                      //@synthesize displayImage=_displayImage - In the implementation block
@property (nonatomic,retain) NSArray * alternativeSpeakableMatches;                       //@synthesize alternativeSpeakableMatches=_alternativeSpeakableMatches - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * spokenPhrase; 
@property (nonatomic,readonly) NSString * vocabularyIdentifier; 
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(NSString *)displayString;
-(id)_dictionaryRepresentation;
-(void)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(id)_intents_displayImageWithLocalizer:(id)arg1 ;
-(id)_intents_localizedCopyWithLocalizer:(id)arg1 ;
-(id)_intents_readableSubtitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(INImage *)displayImage;
-(void)setDisplayImage:(INImage *)arg1 ;
-(NSString *)pronunciationHint;
-(NSString *)subtitleString;
-(void)setSubtitleString:(NSString *)arg1 ;
-(NSString *)vocabularyIdentifier;
-(NSMutableDictionary *)_valueForKeyDictionary;
-(NSString *)spokenPhrase;
-(NSArray *)alternativeSpeakableMatches;
-(id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 displayString:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 displayString:(id)arg2 subtitleString:(id)arg3 displayImage:(id)arg4 ;
-(id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3 subtitleString:(id)arg4 displayImage:(id)arg5 ;
-(void)setAlternativeSpeakableMatches:(NSArray *)arg1 ;
-(void)setDescriptionString:(NSString *)arg1 ;
-(NSString *)descriptionString;
@end

