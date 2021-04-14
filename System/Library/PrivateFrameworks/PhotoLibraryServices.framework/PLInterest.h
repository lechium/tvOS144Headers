/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSKnownKeysMappingStrategy;

@interface PLInterest : NSObject {

	NSKnownKeysMappingStrategy* _allKeysMappingStrategy;
	unsigned long long _indexesOfInterest;

}

@property (nonatomic,retain) NSKnownKeysMappingStrategy * allKeysMappingStrategy;              //@synthesize allKeysMappingStrategy=_allKeysMappingStrategy - In the implementation block
@property (assign,nonatomic) unsigned long long indexesOfInterest;                             //@synthesize indexesOfInterest=_indexesOfInterest - In the implementation block
-(NSKnownKeysMappingStrategy *)allKeysMappingStrategy;
-(void)setAllKeysMappingStrategy:(NSKnownKeysMappingStrategy *)arg1 ;
-(unsigned long long)indexesOfInterest;
-(void)setIndexesOfInterest:(unsigned long long)arg1 ;
@end

