/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSRecordEnumerator.h>

@interface _LSExtensionPointRecordEnumerator : _LSRecordEnumerator {

	vector<unsigned int, std::__1::allocator<unsigned int> >* _extensionIDs;

}
-(BOOL)_prepareWithContext:(LSContext*)arg1 error:(id*)arg2 ;
-(BOOL)_getObject:(id*)arg1 atIndex:(unsigned long long)arg2 context:(LSContext*)arg3 ;
@end

