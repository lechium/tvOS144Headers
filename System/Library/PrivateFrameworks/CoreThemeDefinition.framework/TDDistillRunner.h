/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TDDistiller, NSURL, TDLogger, NSString;

@interface TDDistillRunner : NSObject {

	BOOL _packDocument;
	TDDistiller* _distiller;
	NSURL* _carScratchURL;
	NSURL* _outputURL;
	TDLogger* _logger;
	NSString* _assetStoreVersionString;
	long long _assetStoreVersionNumber;
	NSString* _minDeploymentTarget;

}

@property (nonatomic,copy) NSURL * outputURL;                             //@synthesize outputURL=_outputURL - In the implementation block
@property (nonatomic,retain) TDLogger * logger;                           //@synthesize logger=_logger - In the implementation block
@property (copy) NSString * assetStoreVersionString;                      //@synthesize assetStoreVersionString=_assetStoreVersionString - In the implementation block
@property (assign) long long assetStoreVersionNumber;                     //@synthesize assetStoreVersionNumber=_assetStoreVersionNumber - In the implementation block
@property (assign,nonatomic) BOOL packImagesInDocument; 
@property (assign,nonatomic) NSString * minDeploymentTarget;              //@synthesize minDeploymentTarget=_minDeploymentTarget - In the implementation block
-(id)init;
-(void)dealloc;
-(TDLogger *)logger;
-(void)setOutputURL:(NSURL *)arg1 ;
-(NSURL *)outputURL;
-(void)setLogger:(TDLogger *)arg1 ;
-(id)carScratchURL;
-(NSString *)minDeploymentTarget;
-(BOOL)packImagesInDocument;
-(BOOL)_isDistillUnnecessaryForDocument:(id)arg1 ;
-(long long)assetStoreVersionNumber;
-(void)setAssetStoreVersionNumber:(long long)arg1 ;
-(NSString *)assetStoreVersionString;
-(void)setAssetStoreVersionString:(NSString *)arg1 ;
-(void)_moveScratchToOutputPath;
-(void)_removeScratchPath;
-(void)setPackImagesInDocument:(BOOL)arg1 ;
-(BOOL)runDistillWithDocumentURL:(id)arg1 outputURL:(id)arg2 attemptIncremental:(BOOL)arg3 forceDistill:(BOOL)arg4 ;
-(void)setMinDeploymentTarget:(NSString *)arg1 ;
@end

