/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSKeyedUnarchiverDelegate <NSObject>
@optional
-(void)unarchiverWillFinish:(id)arg1;
-(void)unarchiverDidFinish:(id)arg1;
-(void)unarchiver:(id)arg1 willReplaceObject:(id)arg2 withObject:(id)arg3;
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;

@end

