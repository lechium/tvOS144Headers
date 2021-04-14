/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SiriTVUI/SiriTVUI-Structs.h>
@class NSArray;

@interface SiriTVUICollectionViewLayoutSection : NSObject {

	NSArray* _itemFrames;
	CGRect _sectionHeaderFrame;
	UIEdgeInsets _sectionInset;

}

@property (nonatomic,retain) NSArray * itemFrames;                   //@synthesize itemFrames=_itemFrames - In the implementation block
@property (assign,nonatomic) CGRect sectionHeaderFrame;              //@synthesize sectionHeaderFrame=_sectionHeaderFrame - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInset;              //@synthesize sectionInset=_sectionInset - In the implementation block
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)sectionInset;
-(CGRect)sectionHeaderFrame;
-(void)setSectionHeaderFrame:(CGRect)arg1 ;
-(NSArray *)itemFrames;
-(void)setItemFrames:(NSArray *)arg1 ;
@end

