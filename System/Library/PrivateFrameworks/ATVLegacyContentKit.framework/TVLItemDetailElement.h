/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLRootElement.h>

@class NSString, TVLImageElement, TVLTableElement, TVLShelfElement, TVLDividerElement, TVLGenericCollectionElement;

@interface TVLItemDetailElement : TVLRootElement {

	BOOL _verticallyCentered;
	NSString* _title;
	NSString* _subtitle;
	TVLImageElement* _image;
	TVLImageElement* _defaultImage;
	TVLImageElement* _rightImage;
	NSString* _rating;
	NSString* _summary;
	NSString* _footnote;
	TVLTableElement* _table;
	TVLShelfElement* _centerShelf;
	TVLDividerElement* _divider;
	TVLShelfElement* _bottomShelf;
	TVLGenericCollectionElement* _moreInfo;

}

@property (nonatomic,copy) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) TVLImageElement * image;                             //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) TVLImageElement * defaultImage;                      //@synthesize defaultImage=_defaultImage - In the implementation block
@property (nonatomic,retain) TVLImageElement * rightImage;                        //@synthesize rightImage=_rightImage - In the implementation block
@property (nonatomic,copy) NSString * rating;                                     //@synthesize rating=_rating - In the implementation block
@property (nonatomic,copy) NSString * summary;                                    //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy) NSString * footnote;                                   //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,retain) TVLTableElement * table;                             //@synthesize table=_table - In the implementation block
@property (nonatomic,retain) TVLShelfElement * centerShelf;                       //@synthesize centerShelf=_centerShelf - In the implementation block
@property (nonatomic,retain) TVLDividerElement * divider;                         //@synthesize divider=_divider - In the implementation block
@property (nonatomic,retain) TVLShelfElement * bottomShelf;                       //@synthesize bottomShelf=_bottomShelf - In the implementation block
@property (nonatomic,retain) TVLGenericCollectionElement * moreInfo;              //@synthesize moreInfo=_moreInfo - In the implementation block
@property (assign,nonatomic) BOOL verticallyCentered;                             //@synthesize verticallyCentered=_verticallyCentered - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(TVLImageElement *)image;
-(void)setImage:(TVLImageElement *)arg1 ;
-(NSString *)rating;
-(void)setRating:(NSString *)arg1 ;
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
-(void)setFootnote:(NSString *)arg1 ;
-(TVLTableElement *)table;
-(NSString *)footnote;
-(TVLDividerElement *)divider;
-(void)setDivider:(TVLDividerElement *)arg1 ;
-(void)setMoreInfo:(TVLGenericCollectionElement *)arg1 ;
-(void)setTable:(TVLTableElement *)arg1 ;
-(TVLImageElement *)defaultImage;
-(void)setRightImage:(TVLImageElement *)arg1 ;
-(TVLImageElement *)rightImage;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(TVLShelfElement *)centerShelf;
-(void)setDefaultImage:(TVLImageElement *)arg1 ;
-(void)setCenterShelf:(TVLShelfElement *)arg1 ;
-(TVLGenericCollectionElement *)moreInfo;
-(TVLShelfElement *)bottomShelf;
-(void)setBottomShelf:(TVLShelfElement *)arg1 ;
-(void)setVerticallyCentered:(BOOL)arg1 ;
-(BOOL)verticallyCentered;
@end

