/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSKeyedUnarchiver.h>

@class NSURL, NSDictionary, SCNAssetCatalog, NSString, NSArray;

@interface SCNKeyedUnarchiver : NSKeyedUnarchiver {

	NSURL* _documentURL;
	NSDictionary* _context;
	SCNAssetCatalog* _assetCatalog;
	NSString* _lookUpKey;
	id _lookUpFoundInstance;
	NSArray* _currentMorphTargets;

}

@property (nonatomic,retain) NSArray * currentMorphTargets;               //@synthesize currentMorphTargets=_currentMorphTargets - In the implementation block
@property (nonatomic,retain) NSURL * documentURL;                         //@synthesize documentURL=_documentURL - In the implementation block
@property (nonatomic,retain) NSDictionary * context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) SCNAssetCatalog * assetCatalog;              //@synthesize assetCatalog=_assetCatalog - In the implementation block
@property (nonatomic,retain) NSString * lookUpKey;                        //@synthesize lookUpKey=_lookUpKey - In the implementation block
@property (nonatomic,retain) id lookUpFoundInstance;                      //@synthesize lookUpFoundInstance=_lookUpFoundInstance - In the implementation block
@property (nonatomic,readonly) NSURL * documentEnclosingURL; 
-(void)dealloc;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(NSURL *)documentURL;
-(void)setDocumentURL:(NSURL *)arg1 ;
-(SCNAssetCatalog *)assetCatalog;
-(NSURL *)documentEnclosingURL;
-(id)initForReadingWithData:(id)arg1 secure:(BOOL)arg2 ;
-(void)setAssetCatalog:(SCNAssetCatalog *)arg1 ;
-(NSString *)lookUpKey;
-(void)setLookUpKey:(NSString *)arg1 ;
-(id)lookUpFoundInstance;
-(void)setLookUpFoundInstance:(id)arg1 ;
-(NSArray *)currentMorphTargets;
-(void)setCurrentMorphTargets:(NSArray *)arg1 ;
@end

