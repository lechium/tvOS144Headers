/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UICollectionViewDiffableDataSourceReorderingHandlers : NSObject <NSCopying> {

	/*^block*/id _canReorderItemHandler;
	/*^block*/id _willReorderHandler;
	/*^block*/id _didReorderHandler;

}

@property (nonatomic,copy) id canReorderItemHandler;              //@synthesize canReorderItemHandler=_canReorderItemHandler - In the implementation block
@property (nonatomic,copy) id willReorderHandler;                 //@synthesize willReorderHandler=_willReorderHandler - In the implementation block
@property (nonatomic,copy) id didReorderHandler;                  //@synthesize didReorderHandler=_didReorderHandler - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCanReorderItemHandler:(id)arg1 ;
-(void)setWillReorderHandler:(id)arg1 ;
-(void)setDidReorderHandler:(id)arg1 ;
-(id)canReorderItemHandler;
-(id)willReorderHandler;
-(id)didReorderHandler;
-(id)initWithCanReorderItemHandler:(/*^block*/id)arg1 willReorderItemHandler:(/*^block*/id)arg2 didReorderItemHandler:(/*^block*/id)arg3 ;
@end

