/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PHAJobWorkInfo : NSObject {

	int _workerFlags;
	NSString* _assetLocalIdentifier;

}

@property (nonatomic,copy,readonly) NSString * assetLocalIdentifier;              //@synthesize assetLocalIdentifier=_assetLocalIdentifier - In the implementation block
@property (assign,nonatomic) int workerFlags;                                     //@synthesize workerFlags=_workerFlags - In the implementation block
-(void)setWorkerFlags:(int)arg1 ;
-(int)workerFlags;
-(NSString *)assetLocalIdentifier;
-(id)initWithAssetLocalIdentifier:(id)arg1 workerFlags:(int)arg2 ;
@end

