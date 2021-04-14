/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMetaInfoCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBURL, _SFPBImage, NSData;


@protocol _SFPBMetaInfoCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (assign,nonatomic) BOOL trending; 
@property (nonatomic,retain) _SFPBURL * contentURL; 
@property (nonatomic,retain) _SFPBURL * hostPageURL; 
@property (nonatomic,retain) _SFPBImage * badge; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(id)arg1;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(_SFPBImage *)badge;
-(void)setBadge:(id)arg1;
-(NSArray *)punchoutOptions;
-(void)setContentURL:(id)arg1;
-(_SFPBURL *)contentURL;
-(NSData *)jsonData;
-(void)setPunchoutOptions:(id)arg1;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(id)arg1;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(void)setTrending:(BOOL)arg1;
-(void)setHostPageURL:(id)arg1;
-(BOOL)trending;
-(_SFPBURL *)hostPageURL;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBURL, _SFPBImage, NSData;

@interface _SFPBMetaInfoCardSection : PBCodable <_SFPBMetaInfoCardSection, NSSecureCoding> {

	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _trending;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	_SFPBURL* _contentURL;
	_SFPBURL* _hostPageURL;
	_SFPBImage* _badge;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                         //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                    //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;              //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                              //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                           //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                              //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) BOOL trending;                                   //@synthesize trending=_trending - In the implementation block
@property (nonatomic,retain) _SFPBURL * contentURL;                           //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,retain) _SFPBURL * hostPageURL;                          //@synthesize hostPageURL=_hostPageURL - In the implementation block
@property (nonatomic,retain) _SFPBImage * badge;                              //@synthesize badge=_badge - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_SFPBColor *)backgroundColor;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(_SFPBImage *)badge;
-(void)setBadge:(_SFPBImage *)arg1 ;
-(NSArray *)punchoutOptions;
-(void)setContentURL:(_SFPBURL *)arg1 ;
-(_SFPBURL *)contentURL;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setTrending:(BOOL)arg1 ;
-(void)setHostPageURL:(_SFPBURL *)arg1 ;
-(BOOL)trending;
-(_SFPBURL *)hostPageURL;
@end

