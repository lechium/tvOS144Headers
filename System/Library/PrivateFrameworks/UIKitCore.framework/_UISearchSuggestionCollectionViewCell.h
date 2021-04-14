/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIButton, NSString, UIImage;

@interface _UISearchSuggestionCollectionViewCell : UICollectionViewCell {

	BOOL _isDefault;
	/*^block*/id _selectEventHandler;
	UIButton* _suggestionButton;
	NSString* _suggestion;
	UIImage* _iconImage;
	NSString* _searchString;

}

@property (nonatomic,readonly) UIButton * suggestionButton;              //@synthesize suggestionButton=_suggestionButton - In the implementation block
@property (nonatomic,retain) NSString * suggestion;                      //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                        //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) NSString * searchString;                    //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) BOOL isDefault;                             //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,copy) id selectEventHandler;                        //@synthesize selectEventHandler=_selectEventHandler - In the implementation block
@property (nonatomic,readonly) CGSize fittingSize; 
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isDefault;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setIsDefault:(BOOL)arg1 ;
-(void)commonInit;
-(void)setSuggestion:(NSString *)arg1 ;
-(NSString *)suggestion;
-(UIImage *)iconImage;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(CGSize)fittingSize;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)_reducedTransparencyDidChange:(id)arg1 ;
-(void)updateWithSuggestion:(id)arg1 iconImage:(id)arg2 currentSearchString:(id)arg3 isDefault:(BOOL)arg4 ;
-(void)setSelectEventHandler:(id)arg1 ;
-(id)attributedSuggestionStringWithFont:(id)arg1 searchStringColor:(id)arg2 autofillColor:(id)arg3 highlight:(BOOL)arg4 ;
-(void)didSelectButton:(id)arg1 ;
-(UIButton *)suggestionButton;
-(void)_updateButton;
-(id)selectEventHandler;
@end

