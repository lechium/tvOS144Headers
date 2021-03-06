/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BrailleTranslation/BrailleTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSBundle, NSString;

@interface BRLTTable : NSObject <NSCopying> {

	NSBundle* _bundle;
	NSString* _serviceIdentifier;
	NSString* _language;
	NSString* _variant;

}

@property (nonatomic,retain) NSBundle * _bundle;                                    //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * serviceIdentifier;                        //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * language;                                 //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) NSString * variant;                                  //@synthesize variant=_variant - In the implementation block
@property (nonatomic,readonly) NSString * tableIdentifier; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * localizedNameWithService; 
@property (nonatomic,readonly) NSString * localizedLanguage; 
@property (nonatomic,readonly) NSString * localizedVariant; 
@property (nonatomic,readonly) NSString * localizedService; 
@property (nonatomic,readonly) BOOL supportsTranslationModeContracted; 
@property (nonatomic,readonly) BOOL supportsTranslationMode8Dot; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)identifier;
-(NSString *)localizedName;
-(NSString *)variant;
-(id)initWithIdentifier:(id)arg1 ;
-(NSBundle *)_bundle;
-(NSString *)serviceIdentifier;
-(NSString *)language;
-(void)set_bundle:(NSBundle *)arg1 ;
-(NSString *)tableIdentifier;
-(id)initWithServiceIdentifier:(id)arg1 tableIdentifier:(id)arg2 ;
-(BOOL)supportsTranslationMode8Dot;
-(BOOL)supportsTranslationModeContracted;
-(id)initWithServiceIdentifier:(id)arg1 language:(id)arg2 variant:(id)arg3 ;
-(id)_brailleTableDictionary;
-(NSString *)localizedVariant;
-(NSString *)localizedLanguage;
-(NSString *)localizedService;
-(BOOL)_isEqualToTable:(id)arg1 ;
-(NSString *)localizedNameWithService;
@end

