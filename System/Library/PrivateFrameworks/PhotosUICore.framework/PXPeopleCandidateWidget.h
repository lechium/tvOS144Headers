/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXUIWidget.h>

@protocol PXWidgetDelegate;
@class PXPhotosDetailsContext, PXWidgetSpec, PXPeopleSuggestionDataSource, UIView, UILabel, PHPerson, UIButton, NSLayoutConstraint, NSString, PXOneUpPresentation, PXTilingController, PXSectionedSelectionManager;

@interface PXPeopleCandidateWidget : NSObject <PXChangeObserver, PXUIWidget> {

	BOOL _dismissed;
	PXPhotosDetailsContext* _context;
	PXWidgetSpec* _spec;
	id<PXWidgetDelegate> _widgetDelegate;
	PXPeopleSuggestionDataSource* _dataSource;
	UIView* _contentView;
	UILabel* _label;
	PHPerson* _person;
	UIButton* _notNowButton;
	NSLayoutConstraint* _avatarToLeadingConstraint;
	NSLayoutConstraint* _notNowToTrailingConstraint;

}

@property (nonatomic,retain) PXPeopleSuggestionDataSource * dataSource;                                //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                     //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UILabel * label;                                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) PHPerson * person;                                                        //@synthesize person=_person - In the implementation block
@property (assign,nonatomic) BOOL dismissed;                                                           //@synthesize dismissed=_dismissed - In the implementation block
@property (assign,nonatomic,__weak) UIButton * notNowButton;                                           //@synthesize notNowButton=_notNowButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * avatarToLeadingConstraint;                           //@synthesize avatarToLeadingConstraint=_avatarToLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * notNowToTrailingConstraint;                          //@synthesize notNowToTrailingConstraint=_notNowToTrailingConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PXOneUpPresentation * oneUpPresentation; 
@property (nonatomic,readonly) BOOL cursorInteractionEnabled; 
@property (assign,nonatomic,__weak) id<PXWidgetDelegate> widgetDelegate;                               //@synthesize widgetDelegate=_widgetDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetUnlockDelegate> widgetUnlockDelegate; 
@property (assign,nonatomic,__weak) id<PXWidgetEditingDelegate> widgetEditingDelegate; 
@property (nonatomic,retain) PXPhotosDetailsContext * context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) PXWidgetSpec * spec;                                                      //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) BOOL hasContentForCurrentInput; 
@property (nonatomic,readonly) double extraSpaceNeededAtContentBottom; 
@property (nonatomic,readonly) BOOL hasLoadedContentData; 
@property (nonatomic,readonly) long long contentViewAnchoringType; 
@property (nonatomic,readonly) PXTilingController * contentTilingController; 
@property (nonatomic,readonly) long long contentLayoutStyle; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) NSString * localizedCaption; 
@property (nonatomic,readonly) NSString * localizedDisclosureTitle; 
@property (nonatomic,readonly) BOOL allowUserInteractionWithSubtitle; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (nonatomic,readonly) BOOL supportsSelection; 
@property (assign,getter=isSelecting,nonatomic) BOOL selecting; 
@property (nonatomic,readonly) BOOL supportsFaceMode; 
@property (assign,getter=isFaceModeEnabled,nonatomic) BOOL faceModeEnabled; 
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager; 
@property (nonatomic,readonly) BOOL wantsFocus; 
@property (nonatomic,readonly) BOOL isInEditMode; 
@property (assign,nonatomic) CGSize maxVisibleSizeInEditMode; 
-(PHPerson *)person;
-(void)setPerson:(PHPerson *)arg1 ;
-(PXPhotosDetailsContext *)context;
-(void)setContext:(PXPhotosDetailsContext *)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(PXPeopleSuggestionDataSource *)dataSource;
-(void)setDataSource:(PXPeopleSuggestionDataSource *)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(PXWidgetSpec *)spec;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setSpec:(PXWidgetSpec *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(double)preferredContentHeightForWidth:(double)arg1 ;
-(void)loadContentData;
-(void)unloadContentData;
-(id<PXWidgetDelegate>)widgetDelegate;
-(void)setWidgetDelegate:(id<PXWidgetDelegate>)arg1 ;
-(BOOL)hasContentForCurrentInput;
-(void)controllerTraitCollectionDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)_suggestionsDidFinish:(id)arg1 ;
-(void)updateNotNowButton;
-(void)reviewTapped:(id)arg1 ;
-(void)notNowTapped:(id)arg1 ;
-(void)_dismissWithAnimation:(BOOL)arg1 ;
-(void)_updateAndSetDescriptionFont;
-(BOOL)dismissed;
-(void)setDismissed:(BOOL)arg1 ;
-(UIButton *)notNowButton;
-(void)setNotNowButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)avatarToLeadingConstraint;
-(void)setAvatarToLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)notNowToTrailingConstraint;
-(void)setNotNowToTrailingConstraint:(NSLayoutConstraint *)arg1 ;
@end

