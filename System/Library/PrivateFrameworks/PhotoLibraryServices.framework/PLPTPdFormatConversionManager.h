/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLPTPConversionSupport.h>

@class PFMediaCapabilities, PHMediaFormatConversionManager, NSURL, NSMutableDictionary, NSString;

@interface PLPTPdFormatConversionManager : NSObject <PLPTPConversionSupport> {

	PFMediaCapabilities* _legacyCapabilities;
	BOOL _initialized;
	PFMediaCapabilities* _peerMediaCapabilities;
	PHMediaFormatConversionManager* _mediaFormatConversionManager;
	NSURL* _temporaryDirectoryURL;
	NSMutableDictionary* _convertedLivePhotoPairingIdentifiersByOriginalIdentifiers;

}

@property (retain) PHMediaFormatConversionManager * mediaFormatConversionManager;                                //@synthesize mediaFormatConversionManager=_mediaFormatConversionManager - In the implementation block
@property (retain) NSURL * temporaryDirectoryURL;                                                                //@synthesize temporaryDirectoryURL=_temporaryDirectoryURL - In the implementation block
@property (retain) NSMutableDictionary * convertedLivePhotoPairingIdentifiersByOriginalIdentifiers;              //@synthesize convertedLivePhotoPairingIdentifiersByOriginalIdentifiers=_convertedLivePhotoPairingIdentifiersByOriginalIdentifiers - In the implementation block
@property (assign) BOOL initialized;                                                                             //@synthesize initialized=_initialized - In the implementation block
@property (retain) PFMediaCapabilities * peerMediaCapabilities;                                                  //@synthesize peerMediaCapabilities=_peerMediaCapabilities - In the implementation block
@property (nonatomic,readonly) BOOL penultimateIsPublic; 
@property (nonatomic,readonly) BOOL peerSupportsTranscodeChoice; 
@property (nonatomic,readonly) BOOL peerSupportsAdjustmentBaseResources; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)initialized;
-(void)setInitialized:(BOOL)arg1 ;
-(void)setPeerMediaCapabilities:(PFMediaCapabilities *)arg1 ;
-(PFMediaCapabilities *)peerMediaCapabilities;
-(id)assetReaderForFormatConvertedPTPAsset:(id)arg1 ofManagedAsset:(id)arg2 path:(id)arg3 ;
-(BOOL)generatePosterFrameExportForVideoURL:(id)arg1 outputData:(id*)arg2 maximumSize:(CGSize)arg3 error:(id*)arg4 ;
-(id)conversionResultForAsset:(id)arg1 isVideo:(BOOL)arg2 isRender:(BOOL)arg3 forceLegacyConversion:(BOOL)arg4 ;
-(BOOL)penultimateIsPublic;
-(BOOL)peerSupportsTranscodeChoice;
-(BOOL)peerSupportsAdjustmentBaseResources;
-(BOOL)setupTemporaryDirectory;
-(id)requestForOriginalAtPath:(id)arg1 isVideo:(BOOL)arg2 imageDimensions:(CGSize)arg3 originalPairingIdentifier:(id)arg4 ;
-(id)requestForRenderImagePath:(id)arg1 imageDimensions:(CGSize)arg2 outputFilename:(id)arg3 ;
-(id)requestForPath:(id)arg1 isVideo:(BOOL)arg2 imageDimensions:(CGSize)arg3 ;
-(id)sourceForPath:(id)arg1 isVideo:(BOOL)arg2 imageDimensions:(CGSize)arg3 ;
-(id)convertedAssetLivePhotoPairingIdentifierForOriginalIdentifier:(id)arg1 ;
-(id)effectivePeerMediaCapabilites;
-(PHMediaFormatConversionManager *)mediaFormatConversionManager;
-(void)setMediaFormatConversionManager:(PHMediaFormatConversionManager *)arg1 ;
-(NSURL *)temporaryDirectoryURL;
-(void)setTemporaryDirectoryURL:(NSURL *)arg1 ;
-(NSMutableDictionary *)convertedLivePhotoPairingIdentifiersByOriginalIdentifiers;
-(void)setConvertedLivePhotoPairingIdentifiersByOriginalIdentifiers:(NSMutableDictionary *)arg1 ;
@end

