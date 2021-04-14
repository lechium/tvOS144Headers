/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSProgress;

@interface PLProgressFollower : NSObject {

	/*^block*/id _progressHandler;
	NSProgress* _sourceProgress;
	NSProgress* _outputProgress;

}

@property (retain) NSProgress * outputProgress;                //@synthesize outputProgress=_outputProgress - In the implementation block
@property (readonly) NSProgress * sourceProgress;              //@synthesize sourceProgress=_sourceProgress - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)outputProgress;
-(id)initWithSourceProgress:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(NSProgress *)sourceProgress;
-(void)setOutputProgress:(NSProgress *)arg1 ;
@end

