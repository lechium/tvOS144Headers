/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PGGraphRelatableEvent <PGGraphFullMeaninglessEvent>
@required
+(id)pathFromMoment;
+(id)pathToMoment;
+(id)pathFromTargetNodeDomain:(unsigned short)arg1;
+(id)pathToTargetNodeDomain:(unsigned short)arg1;
+(id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+(id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
-(double)weightForMoment:(id)arg1;
-(id)photoEvent;
-(id)connectedEventsWithTargetDomain:(unsigned short)arg1;
-(id)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(id)arg2;

@end

