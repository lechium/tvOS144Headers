/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TextRecognition/TextRecognition-Structs.h>
@interface CRCHNetworkCursor : NSObject {

	vector<unsigned long, std::__1::allocator<unsigned long> >* _edgeIndexes;

}
-(void)addEdgeIndex:(unsigned long long)arg1 ;
-(unsigned long long)edgeIndexCount;
-(unsigned long long)edgeIndexAtPosition:(unsigned long long)arg1 ;
@end
