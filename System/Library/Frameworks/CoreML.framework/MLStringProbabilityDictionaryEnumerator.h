/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreML-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface MLStringProbabilityDictionaryEnumerator : NSEnumerator {

	map_iterator<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, void *> *, long> >* _iter;
	map_iterator<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, void *> *, long> >* _iterEnd;

}

@property (assign,nonatomic) _map_iterator<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char> iter;                 //@synthesize iter=_iter - In the implementation block
@property (assign,nonatomic) _map_iterator<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char> iterEnd;              //@synthesize iterEnd=_iterEnd - In the implementation block
+(id)enumeratorFromMap:(map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >*)arg1 ;
-(id)nextObject;
-(id)initWithStrMap:(map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >*)arg1 ;
-(_map_iterator<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char>)iter;
-(void)setIter:(_map_iterator<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char>)arg1 ;
-(_map_iterator<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char>)iterEnd;
-(void)setIterEnd:(_map_iterator<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char>)arg1 ;
@end

