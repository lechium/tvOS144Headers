/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGNamingAnalyzer.h>

@class PGGraphNamingProcessor, NSString;

@interface PGNamingBiologicalSexAnalyzer : NSObject <PGNamingAnalyzer> {

	PGGraphNamingProcessor* _processor;

}

@property (nonatomic,__weak,readonly) PGGraphNamingProcessor * processor;              //@synthesize processor=_processor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)name;
-(PGGraphNamingProcessor *)processor;
-(id)initWithNamingProcessor:(id)arg1 ;
-(void)runAnalysisWithProgressBlock:(/*^block*/id)arg1 ;
-(unsigned long long)sexMatchBetweenPersonBiologicalSex:(unsigned long long)arg1 andContactBiologicalSex:(unsigned long long)arg2 ;
@end

