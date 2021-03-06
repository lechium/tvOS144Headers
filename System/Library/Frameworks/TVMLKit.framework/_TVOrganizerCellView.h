/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface _TVOrganizerCellView : UIView {

	NSArray* _components;
	long long _contentVerticalAlignment;
	NSArray* _filteredComponents;

}

@property (nonatomic,copy,readonly) NSArray * filteredComponents;              //@synthesize filteredComponents=_filteredComponents - In the implementation block
@property (nonatomic,copy) NSArray * components;                               //@synthesize components=_components - In the implementation block
@property (assign,nonatomic) long long contentVerticalAlignment;               //@synthesize contentVerticalAlignment=_contentVerticalAlignment - In the implementation block
-(NSArray *)components;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setComponents:(NSArray *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(void)setContentVerticalAlignment:(long long)arg1 ;
-(long long)_alignmentFromView:(id)arg1 ;
-(void)_resetSubviews;
-(CGSize)_sizeThatFitsComponents:(id)arg1 boundingSize:(CGSize)arg2 ;
-(long long)contentVerticalAlignment;
-(void)setComponentsNeedUpdate;
-(NSArray *)filteredComponents;
-(void)_verticallyStackComponents:(id)arg1 alignment:(long long)arg2 ;
-(void)_updateView:(id)arg1 maxViewWidth:(double)arg2 ;
@end

