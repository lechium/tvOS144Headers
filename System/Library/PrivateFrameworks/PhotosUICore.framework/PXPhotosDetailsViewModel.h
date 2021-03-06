/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutablePhotosDetailsViewModel.h>

@class PXSectionedSelectionManager, NSSet, NSString;

@interface PXPhotosDetailsViewModel : PXObservable <PXMutablePhotosDetailsViewModel> {

	BOOL _selecting;
	BOOL _supportsSelection;
	BOOL _supportsFaceMode;
	BOOL _faceModeEnabled;
	PXSectionedSelectionManager* _selectionManager;
	NSSet* _disabledActionTypes;

}

@property (getter=isSelecting,nonatomic,readonly) BOOL selecting;                           //@synthesize selecting=_selecting - In the implementation block
@property (nonatomic,readonly) BOOL supportsSelection;                                      //@synthesize supportsSelection=_supportsSelection - In the implementation block
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager;              //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,readonly) BOOL supportsFaceMode;                                       //@synthesize supportsFaceMode=_supportsFaceMode - In the implementation block
@property (getter=isFaceModeEnabled,nonatomic,readonly) BOOL faceModeEnabled;               //@synthesize faceModeEnabled=_faceModeEnabled - In the implementation block
@property (nonatomic,readonly) NSSet * disabledActionTypes;                                 //@synthesize disabledActionTypes=_disabledActionTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXSectionedSelectionManager *)selectionManager;
-(id)mutableChangeObject;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)supportsSelection;
-(BOOL)isSelecting;
-(void)setSelecting:(BOOL)arg1 ;
-(BOOL)supportsFaceMode;
-(BOOL)isFaceModeEnabled;
-(void)setFaceModeEnabled:(BOOL)arg1 ;
-(void)setSelectionManager:(PXSectionedSelectionManager *)arg1 ;
-(NSSet *)disabledActionTypes;
-(void)setDisabledActionTypes:(NSSet *)arg1 ;
-(void)setSupportsSelection:(BOOL)arg1 ;
-(void)setSupportsFaceMode:(BOOL)arg1 ;
@end

