/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol PXContentUnavailablePlaceholderManagerDelegate;
@class NSString, PXGadgetDataSourceManager, PHFetchResult;

@interface PXContentUnavailablePlaceholderManager : NSObject <PXSectionedDataSourceManagerObserver, PXPhotoLibraryUIChangeObserver> {

	SCD_Struct_PX37 _delegateRespondsTo;
	BOOL _dataSourceEmpty;
	BOOL _libraryEmpty;
	id<PXContentUnavailablePlaceholderManagerDelegate> _delegate;
	NSString* _customTitle;
	NSString* _customMessage;
	PXGadgetDataSourceManager* _gadgetDataSourceManager;
	PHFetchResult* _singleAssetFetchResult;

}

@property (nonatomic,readonly) NSString * customTitle;                                                        //@synthesize customTitle=_customTitle - In the implementation block
@property (nonatomic,readonly) NSString * customMessage;                                                      //@synthesize customMessage=_customMessage - In the implementation block
@property (nonatomic,retain) PXGadgetDataSourceManager * gadgetDataSourceManager;                             //@synthesize gadgetDataSourceManager=_gadgetDataSourceManager - In the implementation block
@property (nonatomic,retain) PHFetchResult * singleAssetFetchResult;                                          //@synthesize singleAssetFetchResult=_singleAssetFetchResult - In the implementation block
@property (assign,getter=isDataSourceEmpty,nonatomic) BOOL dataSourceEmpty;                                   //@synthesize dataSourceEmpty=_dataSourceEmpty - In the implementation block
@property (assign,getter=isLibraryEmpty,nonatomic) BOOL libraryEmpty;                                         //@synthesize libraryEmpty=_libraryEmpty - In the implementation block
@property (assign,nonatomic,__weak) id<PXContentUnavailablePlaceholderManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL wantsPlaceholder; 
@property (nonatomic,readonly) NSString * placeholderTitle; 
@property (nonatomic,readonly) NSString * placeholderMessage; 
@property (nonatomic,readonly) NSString * placeholderButtonTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PXContentUnavailablePlaceholderManagerDelegate>)delegate;
-(void)setDelegate:(id<PXContentUnavailablePlaceholderManagerDelegate>)arg1 ;
-(void)_invalidate;
-(NSString *)customMessage;
-(BOOL)isLibraryEmpty;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(NSString *)placeholderTitle;
-(id)initWithGadgetDataSourceManager:(id)arg1 customTitle:(id)arg2 customMessage:(id)arg3 ;
-(void)setSingleAssetFetchResult:(PHFetchResult *)arg1 ;
-(void)setDataSourceEmpty:(BOOL)arg1 ;
-(void)setLibraryEmpty:(BOOL)arg1 ;
-(BOOL)wantsPlaceholder;
-(NSString *)placeholderMessage;
-(NSString *)placeholderButtonTitle;
-(void)performPlaceholderButtonAction;
-(void)_gadgetDataSourceDidChange;
-(NSString *)customTitle;
-(PXGadgetDataSourceManager *)gadgetDataSourceManager;
-(void)setGadgetDataSourceManager:(PXGadgetDataSourceManager *)arg1 ;
-(PHFetchResult *)singleAssetFetchResult;
-(BOOL)isDataSourceEmpty;
@end

