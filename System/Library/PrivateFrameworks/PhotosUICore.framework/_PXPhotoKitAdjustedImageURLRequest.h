/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/_PXPhotoKitAdjustedUIMediaRequest.h>

@class PLPhotoEditRenderer, PHImageRequestOptions, NSString;

@interface _PXPhotoKitAdjustedImageURLRequest : _PXPhotoKitAdjustedUIMediaRequest {

	PLPhotoEditRenderer* _renderer;
	PHImageRequestOptions* _options;
	NSString* _pairingIdentifier;
	/*^block*/id _resultHandler;

}

@property (nonatomic,readonly) PHImageRequestOptions * options;                //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * pairingIdentifier;              //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                          //@synthesize resultHandler=_resultHandler - In the implementation block
-(void)start;
-(PHImageRequestOptions *)options;
-(NSString *)pairingIdentifier;
-(id)resultHandler;
-(void)editSourceDidChange;
-(void)progressDidChange;
-(void)_renderIfNeeded;
-(id)initWithRenderQueue:(id)arg1 asset:(id)arg2 pairingIdentifier:(id)arg3 imageManager:(id)arg4 options:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(void)_handleExportFinished:(id)arg1 ;
@end

