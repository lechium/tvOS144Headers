/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _NSKeyedCoderOldStyleArray : NSObject {

	void* _addr;
	unsigned long long _count;
	unsigned long long _size;
	char _type;
	BOOL _decoded;
	char _padding[2];

}
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithObjCType:(char)arg1 count:(unsigned long long)arg2 at:(const void*)arg3 ;
-(void)fillObjCType:(char)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
@end

