/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFDetailedRowCardSection.h>
@class NSArray, NSString, SFColor, SFImage, SFRichText, SFFormattedText, SFActionItem, SFButton, NSDictionary, NSData;


@protocol SFDetailedRowCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFImage * thumbnail; 
@property (assign,nonatomic) BOOL preventThumbnailImageScaling; 
@property (nonatomic,retain) SFRichText * title; 
@property (nonatomic,retain) SFFormattedText * secondaryTitle; 
@property (nonatomic,retain) SFImage * secondaryTitleImage; 
@property (assign,nonatomic) BOOL isSecondaryTitleDetached; 
@property (nonatomic,copy) NSArray * descriptions; 
@property (nonatomic,retain) SFRichText * footnote; 
@property (nonatomic,retain) SFFormattedText * trailingTopText; 
@property (nonatomic,retain) SFFormattedText * trailingMiddleText; 
@property (nonatomic,retain) SFFormattedText * trailingBottomText; 
@property (nonatomic,retain) SFActionItem * action; 
@property (nonatomic,retain) SFButton * button; 
@property (assign,nonatomic) BOOL shouldUseCompactDisplay; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(id)arg1;
-(NSString *)type;
-(NSDictionary *)dictionaryRepresentation;
-(SFRichText *)title;
-(void)setTitle:(id)arg1;
-(SFActionItem *)action;
-(void)setAction:(id)arg1;
-(SFImage *)thumbnail;
-(void)setThumbnail:(id)arg1;
-(SFButton *)button;
-(void)setButton:(id)arg1;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(NSArray *)punchoutOptions;
-(void)setDescriptions:(id)arg1;
-(void)setFootnote:(id)arg1;
-(SFRichText *)footnote;
-(NSData *)jsonData;
-(NSArray *)descriptions;
-(SFFormattedText *)secondaryTitle;
-(void)setSecondaryTitle:(id)arg1;
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
-(void)setPreventThumbnailImageScaling:(BOOL)arg1;
-(void)setSecondaryTitleImage:(id)arg1;
-(void)setIsSecondaryTitleDetached:(BOOL)arg1;
-(void)setTrailingTopText:(id)arg1;
-(void)setTrailingMiddleText:(id)arg1;
-(void)setTrailingBottomText:(id)arg1;
-(void)setShouldUseCompactDisplay:(BOOL)arg1;
-(BOOL)preventThumbnailImageScaling;
-(SFImage *)secondaryTitleImage;
-(BOOL)isSecondaryTitleDetached;
-(SFFormattedText *)trailingTopText;
-(SFFormattedText *)trailingMiddleText;
-(SFFormattedText *)trailingBottomText;
-(BOOL)shouldUseCompactDisplay;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFImage, SFRichText, SFFormattedText, SFActionItem, SFButton, NSDictionary, NSData, SFCard, SFUserReportRequest, SFCommand;

@interface SFDetailedRowCardSection : SFCardSection <SFDetailedRowCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF8 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _preventThumbnailImageScaling;
	BOOL _isSecondaryTitleDetached;
	BOOL _shouldUseCompactDisplay;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	SFImage* _thumbnail;
	SFRichText* _title;
	SFFormattedText* _secondaryTitle;
	SFImage* _secondaryTitleImage;
	NSArray* _descriptions;
	SFRichText* _footnote;
	SFFormattedText* _trailingTopText;
	SFFormattedText* _trailingMiddleText;
	SFFormattedText* _trailingBottomText;
	SFActionItem* _action;
	SFButton* _button;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                           //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                     //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                       //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                     //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                  //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                     //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) SFColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SFImage * thumbnail;                                    //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) BOOL preventThumbnailImageScaling;                      //@synthesize preventThumbnailImageScaling=_preventThumbnailImageScaling - In the implementation block
@property (nonatomic,retain) SFRichText * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) SFFormattedText * secondaryTitle;                       //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,retain) SFImage * secondaryTitleImage;                          //@synthesize secondaryTitleImage=_secondaryTitleImage - In the implementation block
@property (assign,nonatomic) BOOL isSecondaryTitleDetached;                          //@synthesize isSecondaryTitleDetached=_isSecondaryTitleDetached - In the implementation block
@property (nonatomic,copy) NSArray * descriptions;                                   //@synthesize descriptions=_descriptions - In the implementation block
@property (nonatomic,retain) SFRichText * footnote;                                  //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,retain) SFFormattedText * trailingTopText;                      //@synthesize trailingTopText=_trailingTopText - In the implementation block
@property (nonatomic,retain) SFFormattedText * trailingMiddleText;                   //@synthesize trailingMiddleText=_trailingMiddleText - In the implementation block
@property (nonatomic,retain) SFFormattedText * trailingBottomText;                   //@synthesize trailingBottomText=_trailingBottomText - In the implementation block
@property (nonatomic,retain) SFActionItem * action;                                  //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) SFButton * button;                                      //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL shouldUseCompactDisplay;                           //@synthesize shouldUseCompactDisplay=_shouldUseCompactDisplay - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (assign,nonatomic) BOOL hideDivider; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFUserReportRequest * userReportRequest; 
@property (nonatomic,retain) SFCommand * command; 
@property (nonatomic,retain) SFCommand * previewCommand; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(NSDictionary *)dictionaryRepresentation;
-(SFRichText *)title;
-(void)setTitle:(SFRichText *)arg1 ;
-(SFActionItem *)action;
-(void)setAction:(SFActionItem *)arg1 ;
-(SFImage *)thumbnail;
-(void)setThumbnail:(SFImage *)arg1 ;
-(SFButton *)button;
-(void)setButton:(SFButton *)arg1 ;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(NSArray *)punchoutOptions;
-(void)setDescriptions:(NSArray *)arg1 ;
-(void)setFootnote:(SFRichText *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(SFRichText *)footnote;
-(NSData *)jsonData;
-(NSArray *)descriptions;
-(SFFormattedText *)secondaryTitle;
-(void)setSecondaryTitle:(SFFormattedText *)arg1 ;
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
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(void)setPreventThumbnailImageScaling:(BOOL)arg1 ;
-(void)setSecondaryTitleImage:(SFImage *)arg1 ;
-(void)setIsSecondaryTitleDetached:(BOOL)arg1 ;
-(void)setTrailingTopText:(SFFormattedText *)arg1 ;
-(void)setTrailingMiddleText:(SFFormattedText *)arg1 ;
-(void)setTrailingBottomText:(SFFormattedText *)arg1 ;
-(void)setShouldUseCompactDisplay:(BOOL)arg1 ;
-(BOOL)preventThumbnailImageScaling;
-(SFImage *)secondaryTitleImage;
-(BOOL)isSecondaryTitleDetached;
-(SFFormattedText *)trailingTopText;
-(SFFormattedText *)trailingMiddleText;
-(SFFormattedText *)trailingBottomText;
-(BOOL)shouldUseCompactDisplay;
-(BOOL)hasPreventThumbnailImageScaling;
-(BOOL)hasIsSecondaryTitleDetached;
-(BOOL)hasShouldUseCompactDisplay;
@end

