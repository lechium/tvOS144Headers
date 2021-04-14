/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Espresso/Espresso-Structs.h>
#import <libobjc.A.dylib/ETDataProvider.h>

@class NSString, NSArray, ETImagePreprocessor;

@interface ETImageFolderDataProvider : NSObject <ETDataProvider> {

	vector<std::__1::pair<NSString *, unsigned long>, std::__1::allocator<std::__1::pair<NSString *, unsigned long> > >* samples;
	vector<NSString *, std::__1::allocator<NSString *> >* classes;
	shared_ptr<Espresso::blob_cpu>* labelBlob;
	NSString* imageTensorName;
	NSString* labelTensorName;
	NSArray* labelShape;
	linear_congruential_engine<unsigned int, 48271, 0, 2147483647> randomgen;
	ETImagePreprocessor* imageProcessor;
	BOOL shuffleBeforeEpoch;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfDataPoints;
-(id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)initWithFolder:(id)arg1 forImageTensor:(id)arg2 andLabelTensor:(id)arg3 shuffleBeforeEachEpoch:(BOOL)arg4 shuffleRandomSeed:(id)arg5 withImagePreprocessParams:(id)arg6 ;
-(void)prepareForEpoch;
@end

