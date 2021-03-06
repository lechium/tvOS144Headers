/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriTVUI/SiriTVUITemplateItem.h>

@class NSArray, SiriTVUITemplateItem, NSNumber;

@interface SiriTVUITabularDataTemplateItem : SiriTVUITemplateItem {

	BOOL _allowContentScrolling;
	NSArray* _columns;
	SiriTVUITemplateItem* _headerItem;
	SiriTVUITemplateItem* _footerItem;
	unsigned long long _layoutStyle;
	NSNumber* _minimumRowHeight;
	NSArray* _rowStyles;

}

@property (nonatomic,copy) NSArray * columns;                                //@synthesize columns=_columns - In the implementation block
@property (nonatomic,retain) SiriTVUITemplateItem * headerItem;              //@synthesize headerItem=_headerItem - In the implementation block
@property (nonatomic,retain) SiriTVUITemplateItem * footerItem;              //@synthesize footerItem=_footerItem - In the implementation block
@property (assign,nonatomic) unsigned long long layoutStyle;                 //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (nonatomic,copy) NSNumber * minimumRowHeight;                      //@synthesize minimumRowHeight=_minimumRowHeight - In the implementation block
@property (nonatomic,copy) NSArray * rowStyles;                              //@synthesize rowStyles=_rowStyles - In the implementation block
@property (assign,nonatomic) BOOL allowContentScrolling;                     //@synthesize allowContentScrolling=_allowContentScrolling - In the implementation block
-(NSArray *)columns;
-(void)setColumns:(NSArray *)arg1 ;
-(void)setLayoutStyle:(unsigned long long)arg1 ;
-(unsigned long long)layoutStyle;
-(BOOL)allowContentScrolling;
-(void)setAllowContentScrolling:(BOOL)arg1 ;
-(SiriTVUITemplateItem *)footerItem;
-(void)setFooterItem:(SiriTVUITemplateItem *)arg1 ;
-(SiriTVUITemplateItem *)headerItem;
-(void)setHeaderItem:(SiriTVUITemplateItem *)arg1 ;
-(NSNumber *)minimumRowHeight;
-(void)setMinimumRowHeight:(NSNumber *)arg1 ;
-(id)initWithColumns:(id)arg1 ;
-(NSArray *)rowStyles;
-(void)setRowStyles:(NSArray *)arg1 ;
@end

