/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@class NSMapTable;

@interface SNLockedMLModelFactory : NSObject {

	NSMapTable* _vendedModels;
	mutex _lock;

}
-(id)init;
-(id)sharedLockedModelWithKey:(id)arg1 orCreateNewModelWithWithFunction:(/*^block*/id)arg2 ;
@end
