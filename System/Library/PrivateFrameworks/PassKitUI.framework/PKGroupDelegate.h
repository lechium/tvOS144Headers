/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKGroupDelegate <NSObject>
@required
-(void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)group:(id)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
-(void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned long long)arg3;

@end

