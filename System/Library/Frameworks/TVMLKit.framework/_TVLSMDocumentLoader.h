/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableArray;

@interface _TVLSMDocumentLoader : NSObject {

	NSMutableDictionary* _loadingRequestsByURL;
	NSMutableArray* _loadingProxies;

}

@property (nonatomic,retain) NSMutableDictionary * loadingRequestsByURL;              //@synthesize loadingRequestsByURL=_loadingRequestsByURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * loadingProxies;                         //@synthesize loadingProxies=_loadingProxies - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSMutableDictionary *)loadingRequestsByURL;
-(NSMutableArray *)loadingProxies;
-(void)_updatePriorityForRequest:(id)arg1 ;
-(void)loadProxy:(id)arg1 onlyIfCached:(BOOL)arg2 ;
-(void)cancelProxy:(id)arg1 ;
-(void)setLoadingRequestsByURL:(NSMutableDictionary *)arg1 ;
-(void)setLoadingProxies:(NSMutableArray *)arg1 ;
@end

